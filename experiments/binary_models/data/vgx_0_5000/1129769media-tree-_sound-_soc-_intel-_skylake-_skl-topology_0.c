static int skl_tplg_add_pipe(struct device *dev,
struct skl_module_cfg *mconfig, struct skl *skl,
struct snd_soc_tplg_vendor_value_elem *tkn_elem)
{
struct skl_pipeline *ppl;
struct skl_pipe *pipe;
struct skl_pipe_params *params;

list_for_each_entry(ppl, &skl->ppl_list, node) {
if (ppl->pipe->ppl_id == tkn_elem->value) {
mconfig->pipe = ppl->pipe;
return -EEXIST;
}
}

ppl = devm_kzalloc(dev, sizeof(*ppl), GFP_KERNEL);
if (!ppl)
return -ENOMEM;

pipe = devm_kzalloc(dev, sizeof(*pipe), GFP_KERNEL);
if (!pipe)
return -ENOMEM;

params = devm_kzalloc(dev, sizeof(*params), GFP_KERNEL);
if (!params)
return -ENOMEM;

pipe->p_params = params;
pipe->ppl_id = tkn_elem->value;
INIT_LIST_HEAD(&pipe->w_list);

ppl->pipe = pipe;
list_add(&ppl->node, &skl->ppl_list);

mconfig->pipe = pipe;
mconfig->pipe->state = SKL_PIPE_INVALID;

return 0;
}