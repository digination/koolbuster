#include "koolbuster.h"


int main(int argc,char** argv) {

  GtkBuilder *builder0;
  GObject *window;

  //GtkWidget* mainWindow;
  gtk_init(&argc,&argv);
  //mainWindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  //gtk_widget_show(mainWindow);

  builder0 = gtk_builder_new();
  gtk_builder_add_from_file(builder0,"ui/main.ui",NULL);

  window = gtk_builder_get_object(builder0,"window1");
  gtk_widget_show((GtkWidget*)window);

  gtk_main();

}
