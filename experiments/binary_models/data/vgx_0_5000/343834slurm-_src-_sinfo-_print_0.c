int _print_state_complete(sinfo_data_t * sinfo_data, int width,
bool right_justify, char *suffix)
{
if (sinfo_data && sinfo_data->nodes_total) {
char *state;
uint32_t my_state;

my_state = sinfo_data->node_state;
state = xstrtolower(node_state_string_complete(my_state));
_print_str(state, width, right_justify, true);
xfree(state);
} else if (sinfo_data)
_print_str("n/a", width, right_justify, true);
else
_print_str("STATECOMPLETE", width, right_justify, true);

if (suffix)
printf("%s", suffix);
return SLURM_SUCCESS;
}