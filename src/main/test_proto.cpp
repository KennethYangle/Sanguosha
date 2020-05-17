#include <sstream>
#include <fstream>
#include "google/protobuf/util/json_util.h"
#include "generals.pb.h"

using GeneralPool = SGSStruct::GeneralPool;

int main() {
    std::string file_path = "/home/zhenglong/ykyk/sanguosha/proto/generals.json";

    std::ifstream fin(file_path.c_str());
    if (!fin) {
        std::cout << "Fail to read json file" << file_path;
        return -1;
    }
    std::stringstream buffer;
    buffer << fin.rdbuf();
    std::cout << buffer.str() << std::endl;
    GeneralPool general_pool;
    // google::protobuf::util::JsonParseOptions options;
    // options.ignore_unknown_fields = false;
    // auto status = google::protobuf::util::JsonStringToMessage(buffer.str(),
    //                                                     &general_pool, options);
    // if (!status.ok()) {
    //     std::cout << "failed to parse json file [" << file_path << "]: ["
    //                 << status.error_message() << "]";
    // }
    // for (const auto& general : general_pool.generals()) {
    //     std::cout << "name: " << general.name();
    //     for (const auto& skill : general.skills()) {
    //         std::cout << " --> skill: " << skill << std::endl;
    //     }
    // }
    fin.close();

    return 0;
}