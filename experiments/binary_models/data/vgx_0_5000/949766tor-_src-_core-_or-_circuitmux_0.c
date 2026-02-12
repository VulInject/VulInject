void
circuitmux_set_num_cells(circuitmux_t *cmux, circuit_t *circ,
unsigned int n_cells)
{
chanid_circid_muxinfo_t *hashent = NULL;

tor_assert(cmux);
tor_assert(circ);


hashent = circuitmux_find_map_entry(cmux, circ);

tor_assert(hashent);


cmux->n_cells -= hashent->muxinfo.cell_count;
cmux->n_cells += n_cells;


if (cmux->policy->notify_set_n_cells) {

cmux->policy->notify_set_n_cells(cmux,
cmux->policy_data,
circ,
hashent->muxinfo.policy_data,
n_cells);
}


if (hashent->muxinfo.cell_count > 0 && n_cells == 0) {
--(cmux->n_active_circuits);
hashent->muxinfo.cell_count = n_cells;
circuitmux_make_circuit_inactive(cmux, circ);

} else if (hashent->muxinfo.cell_count == 0 && n_cells > 0) {
++(cmux->n_active_circuits);
hashent->muxinfo.cell_count = n_cells;
circuitmux_make_circuit_active(cmux, circ);
} else {
hashent->muxinfo.cell_count = n_cells;
}
}