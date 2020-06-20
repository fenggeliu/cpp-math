load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "fixed",
    srcs = ["fixed.cc"],
)

cc_binary(
    name = "dynamic",
    srcs = ["dynamic.cc"],
    deps = [":lib"],
)

cc_library(
    name = "lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
)
