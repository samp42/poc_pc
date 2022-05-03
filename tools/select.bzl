
# Choose between cpus listed in environments.bzl
def cpu_select(values):
    pass


# Choose between gcc/g++ or clang
def compiler_select(values):
    pass


# Choose between release build and debug build
# In debug build, the assembly is written to bazel-out/_asm/
def build_select(values):
    pass
