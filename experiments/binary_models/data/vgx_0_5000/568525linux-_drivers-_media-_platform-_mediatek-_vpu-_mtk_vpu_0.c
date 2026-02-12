int vpu_ipi_register(struct platform_device *pdev,
enum ipi_id id, ipi_handler_t handler,
const char *name, void *priv)
{
struct mtk_vpu *vpu = platform_get_drvdata(pdev);
struct vpu_ipi_desc *ipi_desc;

if (!vpu) {
dev_err(&pdev->dev, "vpu device in not ready\n");
return -EPROBE_DEFER;
}

if (id < IPI_MAX && handler) {
ipi_desc = vpu->ipi_desc;
ipi_desc[id].name = name;
ipi_desc[id].handler = handler;
ipi_desc[id].priv = priv;
return 0;
}

dev_err(&pdev->dev, "register vpu ipi id %d with invalid arguments\n",
id);
return -EINVAL;
}