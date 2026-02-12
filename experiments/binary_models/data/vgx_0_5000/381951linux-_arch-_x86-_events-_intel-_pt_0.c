static u64 pt_config_filters(struct perf_event *event)
{
struct pt_filters *filters = event->hw.addr_filters;
struct pt *pt = this_cpu_ptr(&pt_ctx);
unsigned int range = 0;
u64 rtit_ctl = 0;

if (!filters)
return 0;

perf_event_addr_filters_sync(event);

for (range = 0; range < filters->nr_filters; range++) {
struct pt_filter *filter = &filters->filter[range];




if (pt->filters.filter[range].msr_a != filter->msr_a) {
wrmsrl(pt_address_ranges[range].msr_a, filter->msr_a);
pt->filters.filter[range].msr_a = filter->msr_a;
}

if (pt->filters.filter[range].msr_b != filter->msr_b) {
wrmsrl(pt_address_ranges[range].msr_b, filter->msr_b);
pt->filters.filter[range].msr_b = filter->msr_b;
}

rtit_ctl |= (u64)filter->config << pt_address_ranges[range].reg_off;
}

return rtit_ctl;
}