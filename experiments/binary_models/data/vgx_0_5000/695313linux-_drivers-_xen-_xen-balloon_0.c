}
EXPORT_SYMBOL_GPL(xen_balloon_init);

static ssize_t name##_show(struct device *dev,			\
struct device_attribute *attr,	\
char *buf)				\
{								\
return sprintf(buf, format, ##args);			\
}								\
static DEVICE_ATTR_RO(name)

BALLOON_SHOW(current_kb, "%lu\n", PAGES2KB(balloon_stats.current_pages));
BALLOON_SHOW(low_kb, "%lu\n", PAGES2KB(balloon_stats.balloon_low));
BALLOON_SHOW(high_kb, "%lu\n", PAGES2KB(balloon_stats.balloon_high));

static DEVICE_ULONG_ATTR(schedule_delay, 0444, balloon_stats.schedule_delay);
static DEVICE_ULONG_ATTR(max_schedule_delay, 0644, balloon_stats.max_schedule_delay);
static DEVICE_ULONG_ATTR(retry_count, 0444, balloon_stats.retry_count);
static DEVICE_ULONG_ATTR(max_retry_count, 0644, balloon_stats.max_retry_count);
static DEVICE_BOOL_ATTR(scrub_pages, 0644, xen_scrub_pages);

static ssize_t target_kb_show(struct device *dev, struct device_attribute *attr,
char *buf)
{
return sprintf(buf, "%lu\n", PAGES2KB(balloon_stats.target_pages));
}