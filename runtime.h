// This file is part of the IMP project.

#pragma once

#include <map>
#include <string>

class Interp;



/// Signature of runtime methods.
typedef void (*RuntimeFn) (Interp &);

/// Map of all runtime functions.
extern std::map<std::string, RuntimeFn> kRuntimeFns;
