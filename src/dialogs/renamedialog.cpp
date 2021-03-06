#include "renamedialog.h"
#include "ui_renamedialog.h"

RenameDialog::RenameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenameDialog)
{
    ui->setupUi(this);
}

RenameDialog::~RenameDialog()
{
    delete ui;
}

void RenameDialog::on_buttonBox_accepted()
{
    // Rename function and refresh widgets
    QString name = ui->nameEdit->text();
}

void RenameDialog::on_buttonBox_rejected()
{
    close();
}

void RenameDialog::setFunctionName(QString fcnName)
{
    ui->nameEdit->setText(fcnName);
}

QString RenameDialog::getFunctionName()
{
    QString ret = ui->nameEdit->text();
    return ret;
}
