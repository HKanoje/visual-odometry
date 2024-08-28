#include "vo_utils.h"
#include <opencv2/opencv.hpp>
#include <boost/filesystem.hpp>

using namespace cv;
using namespace std;

class VisualOdometry{
    public:
    VisualOdometry() = default;
    int run(string dataset_path);
}