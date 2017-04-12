#include "UserMatrixMultiplicationOp.h"

using namespace CNTK;

extern "C" __declspec (dllexport) Function* CreateUserTimesFunction(const Variable* operands, size_t /*numOperands*/, const Dictionary* /*attributes*/, const wchar_t* name)
{
    return new UserTimesFunction(operands[0], operands[1], name);
}
