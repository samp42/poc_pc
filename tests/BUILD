cc_test(
	name = "test1",
	srcs = glob(["**/*.cc"]),
	deps = [
		"//third_party/googletest:gtest",
		"//third_party/googletest:gtest_main", #if test source file has no main()
	],
)
