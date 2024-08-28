#include "vo.h"

#include <boost/filesystem.hpp>

int main(int argc, char const *argv[])
{
    VisualOdometry vo;
    boost::filesystem::path dataset_path = boost::filesystem::current_path() / "../kitti_dataset" / "data_odometry_gray";
    boost::filesystem::path imageset_path = dataset_path / "dataset/sequences/00/";
    
    int ret = vo.run(imageset_path.string());

    return ret;
}
