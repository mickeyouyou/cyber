#load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_cc//cc:defs.bzl", "cc_library")
package(default_visibility = ["//visibility:public"])


cc_proto_library(
    name = "examples_cc_proto",
    deps = [
        ":examples_proto",
    ],
)

proto_library(
    name = "examples_proto",
    srcs = [
        "examples.proto",
    ],
)
