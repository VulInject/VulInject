int ordered_events__queue(struct ordered_events *oe, union perf_event *event,
u64 timestamp, u64 file_offset, const char *file_path)
{
struct ordered_event *oevent;

if (!timestamp || timestamp == ~0ULL)
return -ETIME;

if (timestamp < oe->last_flush) {
pr_oe_time(timestamp,      "out of order event\n");
pr_oe_time(oe->last_flush, "last flush, last_flush_type %d\n",
oe->last_flush_type);

oe->nr_unordered_events++;
}

oevent = ordered_events__new_event(oe, timestamp, event);
if (!oevent) {
ordered_events__flush(oe, OE_FLUSH__HALF);
oevent = ordered_events__new_event(oe, timestamp, event);
}

if (!oevent)
return -ENOMEM;

oevent->file_offset = file_offset;
oevent->file_path = file_path;
return 0;
}