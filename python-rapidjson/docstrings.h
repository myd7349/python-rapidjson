#ifndef DOCSTRINGS_H_
#define DOCSTRINGS_H_

PyDoc_STRVAR(module_docstring,
             "Fast, simple JSON encoder and decoder. Based on RapidJSON C++ library.");

PyDoc_STRVAR(loads_docstring,
             "loads(s, object_hook=None, use_decimal=False,"
             " allow_nan=True, datetime_mode=None, uuid_mode=None)\n"
             "\n"
             "Decodes a JSON string into Python object.");

PyDoc_STRVAR(dumps_docstring,
             "dumps(obj, skipkeys=False, ensure_ascii=True, allow_nan=True, indent=None,"
             " default=None, sort_keys=False, use_decimal=False, max_recursion_depth=2048,"
             " datetime_mode=None, uuid_mode=None)\n"
             "\n"
             "Encodes Python object into a JSON string.");

#endif
