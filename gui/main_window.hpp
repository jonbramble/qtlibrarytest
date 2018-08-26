#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include "../client/client.h"

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
private slots:
  void onClick();

private:
  QPushButton *button;
};
