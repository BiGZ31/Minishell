# include "minishell.h"

void	ft_env()
{
	printf("SSH_AUTH_SOCK=%s\n", getenv(""));
	printf("SESSION_MANAGER=%s\n", getenv(""));
	printf("GNOME_TERMINAL_SCREEN=%s\n", getenv(""));
	printf("LANG=%s\n", getenv(""));
	printf("LANGUAGE=%s\n", getenv(""));
	printf("SSH_AGENT_PID=%s\n", getenv(""));
	printf("XDG_CURRENT_DESKTOP=%s\n", getenv(""));
	printf("IM_CONFIG_PHASE=%s\n", getenv(""));
	printf("XDG_GREETER_DATA_DIR=%s\n", getenv(""));
	printf("COLORTERM=%s\n", getenv(""));
	printf("LIBVIRT_DEFAULT_URI=%s\n", getenv(""));
	printf("GPG_AGENT_INFO=%s\n", getenv(""));
	printf("DESKTOP_SESSION=%s\n", getenv(""));
	printf("QT_IM_MODULE=%s\n", getenv(""));
	printf("XDG_MENU_PREFIX=%s\n", getenv(""));
	printf("PWD = %s\n", getenv("PWD"));
	printf("USER=%s\n", getenv(""));
	printf("DBUS_SESSION_BUS_ADDRESS=%s\n", getenv(""));
	printf("DOCKER_HOST=%s\n", getenv(""));
	printf("GTK_MODULES=%s\n", getenv(""));
	printf("XDG_CONFIG_DIRS=%s\n", getenv(""));
}