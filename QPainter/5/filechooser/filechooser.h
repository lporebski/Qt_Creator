#ifndef FILECHOOSER_H
#define FILECHOOSER_H

#include <QWidget>


class QLineEdit;
class QPushButton;
class FileChooser : public QWidget
{
    Q_OBJECT

public:
    FileChooser(QWidget *parent = 0);

public slots:
    void chooseFile();
    QString file() const;
    void setFile(const QString &file);
private:
    QLineEdit *lineEdit;
    QPushButton *button;
};

#endif // FILECHOOSER_H
