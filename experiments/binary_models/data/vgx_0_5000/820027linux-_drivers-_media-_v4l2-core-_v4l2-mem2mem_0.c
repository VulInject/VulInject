static bool debug;
module_param(debug, bool, 0644);

do {								\
if (debug)						\
printk(KERN_DEBUG "%s: " fmt, __func__, ## arg);\
} while (0)












enum v4l2_m2m_entity_type {
MEM2MEM_ENT_TYPE_SOURCE,
MEM2MEM_ENT_TYPE_SINK,
MEM2MEM_ENT_TYPE_PROC
};

static const char * const m2m_entity_name[] = {
"source",
"sink",
"proc"
};


struct v4l2_m2m_dev {
struct v4l2_m2m_ctx	*curr_ctx;
struct media_entity	*source;
struct media_pad	source_pad;
struct media_entity	sink;
struct media_pad	sink_pad;
struct media_entity	proc;
struct media_pad	proc_pads[2];
struct media_intf_devnode *intf_devnode;

struct list_head	job_queue;
spinlock_t		job_spinlock;
struct work_struct	job_work;
unsigned long		job_queue_flags;

const struct v4l2_m2m_ops *m2m_ops;
};