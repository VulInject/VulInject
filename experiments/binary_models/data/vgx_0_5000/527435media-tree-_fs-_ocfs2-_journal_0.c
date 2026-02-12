int ocfs2_compute_replay_slots(struct ocfs2_super *osb)
{
struct ocfs2_replay_map *replay_map;
int i, node_num;


if (osb->replay_map)
return 0;

replay_map = kzalloc(sizeof(struct ocfs2_replay_map) +
(osb->max_slots * sizeof(char)), GFP_KERNEL);

if (!replay_map) {
mlog_errno(-ENOMEM);
return -ENOMEM;
}

spin_lock(&osb->osb_lock);

replay_map->rm_slots = osb->max_slots;
replay_map->rm_state = REPLAY_UNNEEDED;


for (i = 0; i < replay_map->rm_slots; i++) {
if (ocfs2_slot_to_node_num_locked(osb, i, &node_num) == -ENOENT)
replay_map->rm_replay_slots[i] = 1;
}

osb->replay_map = replay_map;
spin_unlock(&osb->osb_lock);
return 0;
}