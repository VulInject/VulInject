int evlist__add_sb_event(struct evlist *evlist, struct perf_event_attr *attr,
evsel__sb_cb_t cb, void *data)
{
struct evsel *evsel;

if (!attr->sample_id_all) {
pr_warning("enabling sample_id_all for all side band events\n");
attr->sample_id_all = 1;
}

evsel = evsel__new_idx(attr, evlist->core.nr_entries);
if (!evsel)
return -1;

evsel->side_band.cb = cb;
evsel->side_band.data = data;
evlist__add(evlist, evsel);
return 0;
}