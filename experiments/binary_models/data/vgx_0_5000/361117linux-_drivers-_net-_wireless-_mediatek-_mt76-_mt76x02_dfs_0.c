static void mt76x02_dfs_detector_reset(struct mt76x02_dev *dev)
{
struct mt76x02_dfs_pattern_detector *dfs_pd = &dev->dfs_pd;
struct mt76x02_dfs_sequence *seq, *tmp_seq;
int i;


mt76_wr(dev, MT_BBP(DFS, 1), 0xf);


for (i = 0; i < ARRAY_SIZE(dfs_pd->event_rb); i++) {
dfs_pd->event_rb[i].h_rb = 0;
dfs_pd->event_rb[i].t_rb = 0;
}

list_for_each_entry_safe(seq, tmp_seq, &dfs_pd->sequences, head) {
list_del_init(&seq->head);
mt76x02_dfs_seq_pool_put(dev, seq);
}
}