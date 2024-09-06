cc_library(
    name = "test2",
    srcs = ["test2.c"],
    hdrs = ["test2.h"],
    copts = [
        "-std=c17",
        "-O2",
    ],
)

cc_binary(
    name = "test1",
    srcs = ["test1.c"],
    deps = [
        ":test2",
    ],
    copts = [
        "-std=c17",
        "-O2",
    ],
)
