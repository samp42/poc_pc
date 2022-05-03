package(default_visibility = ["//visibility:public"])

config_setting(
    name = "comp_clang",
    values = {"compiler" : "clang"},
)
config_setting(
    name = "comp_gcc",
    values = {"compiler" : "gcc"},
)

config_setting(
    name = "arm32",
    values = {"cpu" : "arm32"},
)

config_setting(
    name = "aarch64",
    values = {"cpu" : "aarch64"},
)

config_setting(
    name = "x86",
    values = {"cpu" : "x86"},
)

config_setting(
    name = "arm32_dbg",
    values = {
        "cpu" : "arm32",
        "compilation_mode": "dbg",
    },
)

config_setting(
    name = "aarch64_dbg",
    values = {
        "cpu" : "aarch64",
        "compilation_mode": "dbg",
    },
)

config_setting(
    name = "x86_64_dbg",
    values = {
        "cpu" : "x86_64",
        "compilation_mode": "dbg",
    },
)

environment(name = "arm32")
environment(name = "aarch64")

environment(name = "x86_64")

environmnent_group(
    name = "cpus",
    defaults = [
        ":arm32",
        ":aarch64",
        ":x86_64",
    ],
    environments = [
        ":arm32",
        ":aarch64",
        ":x86_64"
    ],
)

