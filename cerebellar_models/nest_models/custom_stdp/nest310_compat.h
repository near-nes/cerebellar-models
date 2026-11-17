// NEST >= 3.10 dropped the SLI dictionary layer; map the old names used by the
// pre-3.10 NESTML-generated and hand-written sources onto the new Dictionary API.
#ifndef CUSTOM_STDP_NEST310_COMPAT_H
#define CUSTOM_STDP_NEST310_COMPAT_H

#include <string>

#include "dictionary.h"

typedef Dictionary DictionaryDatum;
typedef std::string Name;

#endif
