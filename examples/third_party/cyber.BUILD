licenses(["notice"])

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "cyber",
    includes = [
        ".",
    ],
    linkopts = [
        "-L/cyber/lib",
        "-lcyber_core",
    ],
)

config_setting(
    name = "x86_mode",
    values = {"cpu": "k8"},
)

config_setting(
    name = "arm_mode",
    values = {"cpu": "arm"},
)
