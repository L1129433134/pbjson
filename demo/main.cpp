#include "pbjson.hpp"
#include "witness_service.pb.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    std::ifstream ifile;
    ifile.open("../test.json");
    std::istreambuf_iterator<char> beg(ifile), end;
    std::string json_str(beg, end);
    ifile.close();

    dg::model::WitnessResponse msg;
    std::string err;
    pbjson::json2pb(json_str, &msg, err);

    std::string output_json;
    pbjson::pb2json(&msg, output_json);
    std::cout << output_json << std::endl;
    return 0;
}

