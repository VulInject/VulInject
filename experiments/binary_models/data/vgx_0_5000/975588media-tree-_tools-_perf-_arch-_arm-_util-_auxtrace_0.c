

struct auxtrace_record
*auxtrace_record__init(struct perf_evlist *evlist, int *err)
{
struct perf_pmu	*cs_etm_pmu;
struct perf_evsel *evsel;
bool found_etm = false;

cs_etm_pmu = perf_pmu__find(CORESIGHT_ETM_PMU_NAME);

if (evlist) {
evlist__for_each_entry(evlist, evsel) {
if (cs_etm_pmu &&
evsel->attr.type == cs_etm_pmu->type)
found_etm = true;
}
}

if (found_etm)
return cs_etm_record_init(err);


*err = 0;
return NULL;
}