static int video_nr[] = {[0 ... (MAX_BCM2835_CAMERAS - 1)] = UNSET };
module_param_array(video_nr, int, NULL, 0644);
MODULE_PARM_DESC(video_nr, "videoX start numbers, -1 is autodetect");

static int max_video_width = MAX_VIDEO_MODE_WIDTH;
static int max_video_height = MAX_VIDEO_MODE_HEIGHT;
module_param(max_video_width, int, 0644);
MODULE_PARM_DESC(max_video_width, "Threshold for video mode");
module_param(max_video_height, int, 0644);
MODULE_PARM_DESC(max_video_height, "Threshold for video mode");


static atomic_t camera_instance = ATOMIC_INIT(0);


static struct bcm2835_mmal_dev *gdev[MAX_BCM2835_CAMERAS];



static const struct v4l2_fract
tpf_min     = {.numerator = 1,		.denominator = FPS_MAX},
tpf_max     = {.numerator = 1,	        .denominator = FPS_MIN},
tpf_default = {.numerator = 1000,	.denominator = 30000};


struct vb2_mmal_buffer {
struct vb2_v4l2_buffer	vb;
struct mmal_buffer	mmal;
};