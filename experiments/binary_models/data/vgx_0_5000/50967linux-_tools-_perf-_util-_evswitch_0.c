int evswitch__init(struct evswitch *evswitch, struct evlist *evlist, FILE *fp)
{
if (evswitch->on_name) {
evswitch->on = evlist__find_evsel_by_str(evlist, evswitch->on_name);
if (evswitch->on == NULL) {
evswitch__fprintf_enoent(fp, "on", evswitch->on_name);
return -ENOENT;
}
evswitch->discarding = true;
}

if (evswitch->off_name) {
evswitch->off = evlist__find_evsel_by_str(evlist, evswitch->off_name);
if (evswitch->off == NULL) {
evswitch__fprintf_enoent(fp, "off", evswitch->off_name);
return -ENOENT;
}
}

return 0;
}