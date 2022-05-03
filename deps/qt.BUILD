cc_library(
    name = "qt",
    srcs = glob(
        [
            "lib/libqwt-qt5.so",
            "lib/libqwt-qt5.so.6",
            "lib/libqwt-qt5.so.6.1",
            "lib/libqwt-qt5.so.6.1.4",
        ],
    ),
    hdrs = glob(["**/*.h*"]),
    includes = ["include/"],
    linkstatic = True,
    visibility = ["//visibility:public"],
)

