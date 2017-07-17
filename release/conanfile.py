from conans import ConanFile, CMake
import os
import shutil

class Pbjson(ConanFile): 
    name = "pbjson"
    version = "2.1.0"
    settings = "os", "compiler", "build_type", "arch" 
    exports = "*"


    def package(self):
        self.copy("*", dst="include", src="include")
        self.copy("*", dst="lib", src="lib")

    def package_info(self):
        self.cpp_info.libs = ["pbjson"]
