```conan create .```
Success

```conan create . -pr default```
Success

```conan create . -pr default -pr:b default```
Error:
```
CMake Error at CMakeLists.txt:7 (add_library):
  Target "libTest" links to target "CONAN_PKG::gtest" but the target was not
  found.  Perhaps a find_package() call is missing for an IMPORTED target, or
  an ALIAS target is missing?
```

Change `private=True` to `private=False` in `conanfile.py`

```conan create . -pr default -pr:b default```
Success
