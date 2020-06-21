load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "fixed",
    srcs = ["fixed.cc"],
)

cc_binary(
    name = "dynamic",
    srcs = ["dynamic.cc"],
    deps = ["//linalg/lib"],
)
