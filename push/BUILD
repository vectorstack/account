# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "push",
    srcs = ["src/push_server.cc",
			"include/transfer/transfer.h",
			"src/transfer/transfer.cc",
			"include/xinge/xinge_push.h",
			"src/xinge/xinge_push.cc",
			"include/xinge/md5.h",
			"src/xinge/md5.cc",
			"include/channel/channel_push.h",
			"src/channel/channel_push.cc",
			"include/channel/rpc_channel.h",
			"src/channel/rpc_channel.cc",
			"include/channel/async_channel.h",
			"src/channel/async_channel.cc",
			"include/cache/cache.h",
			"src/cache/cache.cc",
            "grpc/push.grpc.pb.cc", 
            "grpc/push.pb.cc", 
            "grpc/push.grpc.pb.h", 
            "grpc/push.pb.h"],
	includes = ["include/", "grpc/", "./"],
    deps = ["@com_github_grpc_grpc//:grpc++", 
			"@com_github_grpc_grpc//:grpc_plugin_support", 
			"@acl_cpp//:acl_cpp",
			"@curl//:curl"],
)

cc_binary(
    name = "ptest",
    srcs = ["test/ptest.cc",
            "push.grpc.pb.cc", 
            "push.pb.cc", 
            "push.grpc.pb.h", 
            "push.pb.h"],
	includes = ["include/", "./"],
    deps = ["@com_github_grpc_grpc//:grpc++", 
			"@com_github_grpc_grpc//:grpc_plugin_support", 
			"@mysql_connector//:mysql_connector",
			"@acl_cpp//:acl_cpp",
			"@curl//:curl"],
)