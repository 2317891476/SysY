#include <iostream>
#include <vector>

namespace codegen {
static const std::string space = "    ";
static const std::string endl = "\n";

static std::string RTypeInst(std::string name, std::string rd, std::string rs1, std::string rs2) {
  return space + name + " " + rd + ", " + rs1 + ", " + rs2;
}


class RegisterManager {
public:
  std::vector<std::pair<std::string, std::string>> intRegs = {{"x0", "zero"}, {"x1", "ra"}, {"x2", "sp"}, {"x3", "gp"}, {"x4", "tp"}, {"x5", "t0"}, {"x6", "t1"}, {"x7", "t2"}, {"x8", "s0"}, {"x9", "s1"}, {"x10", "a0"}, {"x11", "a1"}, {"x12", "a2"}, {"x13", "a3"}, {"x14", "a4"}, {"x15", "a5"}, {"x16", "a6"}, {"x17", "a7"}, {"x18", "s2"}, {"x19", "s3"}, {"x20", "s4"}, {"x21", "s5"}, 
  {"x22", "s6"}, {"x23", "s7"}, {"x24", "s8"}, {"x25", "s9"}, {"x26", "s10"}, {"x27", "s11"}, {"x28", "t3"}, {"x29", "t4"}, {"x30", "t5"}, {"x31", "t6"}};

  std::vector<std::pair<std::string, std::string>> floatRegs = {{"f0", "ft0"}, {"f1", "ft1"}, {"f2", "ft2"}, {"f3", "ft3"}, {"f4", "ft4"}, {"f5", "ft5"}, {"f6", "ft6"}, {"f7", "ft7"}, {"f8", "fs0"}, {"f9", "fs1"}, {"f10", "fa0"}, {"f11", "fa1"}, {"f12", "fa2"}, {"f13", "fa3"}, {"f14", "fa4"}, {"f15", "fa5"}, {"f16", "fa6"}, {"f17", "fa7"}, {"f18", "fs2"}, {"f19", "fs3"}, {"f20", "fs4"}, {"f21", "fs5"}, {"f22", "fs6"},
  {"f23", "fs7"}, {"f24", "fs8"}, {"f25", "fs9"}, {"f26", "fs10"}, {"f27", "fs11"}, {"f28", "ft8"}, {"f29", "ft9"}, {"f30", "ft10"}, {"f31", "ft11"}};
}; // class RegisterManager


}