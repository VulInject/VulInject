int mlx5vf_cmd_load_vhca_state(struct mlx5vf_pci_core_device *mvdev,
struct mlx5_vf_migration_file *migf,
struct mlx5_vhca_data_buffer *buf)
{
u32 out[MLX5_ST_SZ_DW(load_vhca_state_out)] = {};
u32 in[MLX5_ST_SZ_DW(load_vhca_state_in)] = {};
int err;

lockdep_assert_held(&mvdev->state_mutex);
if (mvdev->mdev_detach)
return -ENOTCONN;

if (!buf->dmaed) {
err = mlx5vf_dma_data_buffer(buf);
if (err)
return err;
}

MLX5_SET(load_vhca_state_in, in, opcode,
MLX5_CMD_OP_LOAD_VHCA_STATE);
MLX5_SET(load_vhca_state_in, in, op_mod, 0);
MLX5_SET(load_vhca_state_in, in, vhca_id, mvdev->vhca_id);
MLX5_SET(load_vhca_state_in, in, mkey, buf->mkey);
MLX5_SET(load_vhca_state_in, in, size, buf->length);
return mlx5_cmd_exec_inout(mvdev->mdev, load_vhca_state, in, out);
}