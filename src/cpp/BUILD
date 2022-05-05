load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
#load("@//tools:environments.bzl")

cc_binary(
    name = "main",
    srcs = ["main.cc"],
#    srcs = select({
#        ":x86": ["main.cc"],    
#        ":arm32": ["main.cc"],
#    }),    
    deps = [
    	"@com_github_google_glog//:glog",
        "@flatbuffers//:flatbuffers",
        ":benchmark",
    ],
)

cc_library(
    name = "benchmark",
    hdrs = ["benchmark.h"],
    deps = [
        "@eigen//:eigen",
    ],
)

