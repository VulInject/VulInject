int rrdcalc_add_from_config(RRDHOST *host, RRDCALC *rc) {
if(!rc->chart) {
error("Health configuration for alarm '%s' does not have a chart", rrdcalc_name(rc));
return 0;
}

if(!rc->update_every) {
error("Health configuration for alarm '%s.%s' has no frequency (parameter 'every'). Ignoring it.", rrdcalc_chart_name(rc), rrdcalc_name(rc));
return 0;
}

if(!RRDCALC_HAS_DB_LOOKUP(rc) && !rc->calculation && !rc->warning && !rc->critical) {
error("Health configuration for alarm '%s.%s' is useless (no db lookup, no calculation, no warning and no critical expressions)", rrdcalc_chart_name(rc), rrdcalc_name(rc));
return 0;
}

char key[RRDCALC_MAX_KEY_SIZE + 1];
size_t key_len = rrdcalc_key(key, RRDCALC_MAX_KEY_SIZE, string2str(rc->chart), string2str(rc->name));

struct rrdcalc_constructor tmp = {
.rrdhost = host,
.from_config = rc,
.from_rrdcalctemplate = NULL,
.rrdset = NULL,
.react_action = RRDCALC_REACT_NONE,
};

int ret = 1;
RRDCALC *t = dictionary_set_advanced(host->rrdcalc_root_index, key, (ssize_t)(key_len + 1), rc, sizeof(RRDCALC), &tmp);
if(tmp.react_action == RRDCALC_REACT_NEW) {

freez(rc);
rc = t;


RRDSET *st;
rrdset_foreach_read(st, host) {
if (unlikely(rrdcalc_check_and_link_rrdset_callback(st, rc) == -1))
break;
}
rrdset_foreach_done(st);
}
else {
error(
"RRDCALC: from config '%s' on chart '%s' failed to be added to host '%s'. It already exists.",
string2str(rc->name),
string2str(rc->chart),
rrdhost_hostname(host));

ret = 0;


rrdcalc_free_unused_rrdcalc_loaded_from_config(rc);
}

return ret;
}