#!/bin/bash

makesure_dir_exist(){
    if [ ! -d "$1" ]; then
        mkdir -p "$1"
    fi
}


if [ -z "$1" ]; then
    echo "Usage: proto_gen.sh c|cpp|python|golang|csharp"
    exit
fi

if [ "$1" == "cpp" ]; then
    grpc_x_plugin=`which grpc_cpp_plugin`
    target="--cpp_out"
    target_dir="../src/cpp"
    makesure_dir_exist $target_dir
    protoc -I . $target=$target_dir common.proto localcommon.proto witness_service.proto
#    protoc -I . --grpc_out=$target_dir --plugin=protoc-gen-grpc=${grpc_x_plugin} common.proto
#    protoc -I . --grpc_out=$target_dir --plugin=protoc-gen-grpc=${grpc_x_plugin} witness.proto
#    protoc -I . --grpc_out=$target_dir --plugin=protoc-gen-grpc=${grpc_x_plugin} localcommon.proto
elif [ "$1" == "c" ]; then
    protoc_exe="protoc"
    target="--c_out"
    target_dir="../src/c"
    makesure_dir_exist $target_dir
    $protoc_exe -I . $target=$target_dir localcommon.proto
    $protoc_exe -I . $target=$target_dir common.proto
    $protoc_exe -I . $target=$target_dir witness.proto
elif [ "$1" == "python" ]; then
    grpc_x_plugin=`which grpc_python_plugin`
    target="--python_out"
    target_dir="../src/python"
    makesure_dir_exist $target_dir
    python -m grpc.tools.protoc -I . --python_out=$target_dir --grpc_python_out=$target_dir *.proto
elif [ "$1" == "golang" ]; then
    target="--go_out"
    target_dir="../src/golang"
    makesure_dir_exist $target_dir
    protoc -I . $target=$target_dir common.proto
    protoc -I . $target=$target_dir localcommon.proto
    protoc ranker.proto $target=plugins=grpc:$target_dir
    protoc witness.proto $target=plugins=grpc:$target_dir
    protoc system.proto $target=plugins=grpc:$target_dir
elif [ "$1" == "csharp" ]; then
    grpc_x_plugin=`which grpc_csharp_plugin`
    target="--csharp_out"
    target_dir="../src/csharp"
    makesure_dir_exist $target_dir

    protoc -I . --csharp_out=$target_dir --grpc_out=$target_dir *.proto --plugin=protoc-gen-grpc=$grpc_x_plugin
else
    echo "Usage: proto_gen.sh [cpp|python|golang|csharp]"
    exit
fi

echo "proto src file generated finished"



#generate grpc codes



