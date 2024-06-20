#include "../frontend/IR.h"
#include<string>

namespace Optimization {
class Hole {
private:
  sysy::Module *module;
public:
  sysy::BasicBlock *curBB;
public:
  Hole(sysy::Module *module): module(module) {};
  void functionTransform(sysy::Function *func);
  void basicblockTransform(sysy::BasicBlock *bb);
  void loadStoreEliminate(sysy::RVInst *inst1, sysy::RVInst *inst2);
  void storeLoadEliminate(sysy::RVInst *inst1, sysy::RVInst *inst2);
}; // class hole
}