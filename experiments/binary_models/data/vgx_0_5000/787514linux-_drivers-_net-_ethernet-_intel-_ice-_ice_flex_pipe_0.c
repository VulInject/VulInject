static int
ice_get_prof(struct ice_hw *hw, enum ice_block blk, u64 hdl,
struct list_head *chg)
{
struct ice_prof_map *map;
struct ice_chs_chg *p;
int status = 0;
u16 i;

mutex_lock(&hw->blk[blk].es.prof_map_lock);

map = ice_search_prof_id(hw, blk, hdl);
if (!map) {
status = -ENOENT;
goto err_ice_get_prof;
}

for (i = 0; i < map->ptg_cnt; i++)
if (!hw->blk[blk].es.written[map->prof_id]) {

p = devm_kzalloc(ice_hw_to_dev(hw), sizeof(*p),
GFP_KERNEL);
if (!p) {
status = -ENOMEM;
goto err_ice_get_prof;
}

p->type = ICE_PTG_ES_ADD;
p->ptype = 0;
p->ptg = map->ptg[i];
p->add_ptg = 0;

p->add_prof = 1;
p->prof_id = map->prof_id;

hw->blk[blk].es.written[map->prof_id] = true;

list_add(&p->list_entry, chg);
}

err_ice_get_prof:
mutex_unlock(&hw->blk[blk].es.prof_map_lock);

return status;
}