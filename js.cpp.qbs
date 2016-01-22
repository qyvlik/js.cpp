import qbs

CppApplication {
    type: "application" // To suppress bundle generation on Mac
    consoleApplication: true
    files: [
        "main.cpp",
        "src/bridge.h",
        "src/variant.h",
    ]

    cpp.defines: {
        if(qbs.buildVariant == "debug") {
            return "QBS_DEBUG";
        } else {
            // release
            return "QBS_RELEASE";
        }
    }

    cpp.cxxFlags:"-std=c++11"

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
