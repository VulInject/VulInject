static int mtk_clk_mux_notifier_cb(struct notifier_block *nb,
unsigned long event, void *_data)
{
struct clk_notifier_data *data = _data;
struct clk_hw *hw = __clk_get_hw(data->clk);
struct mtk_mux_nb *mux_nb = to_mtk_mux_nb(nb);
int ret = 0;

switch (event) {
case PRE_RATE_CHANGE:
mux_nb->original_index = mux_nb->ops->get_parent(hw);
ret = mux_nb->ops->set_parent(hw, mux_nb->bypass_index);
break;
case POST_RATE_CHANGE:
case ABORT_RATE_CHANGE:
ret = mux_nb->ops->set_parent(hw, mux_nb->original_index);
break;
}

return notifier_from_errno(ret);
}