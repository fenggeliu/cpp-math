load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
    visibility = ["//linalg/malloc_notation:__pkg__"],
)

cc_library(
    name = "ezmatrix",
    srcs = ["EzMatrix.cc"],
    hdrs = ["EzMatrix.h"],
    visibility = ["//linalg/matrix_multiplication:__pkg__"],
    deps = ["lib"],
)
