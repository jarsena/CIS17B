#ifndef SUMMARYWINDOW_H
#define SUMMARYWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

class SummaryWindow : public QWidget
{
    Q_OBJECT

private:
    // Labels
    QLabel* name;
    QLabel* accountNum;

    // Buttons
    QPushButton* savings;
    QPushButton* checking;
    QPushButton* withdraw;
    QPushButton* deposit;
    QPushButton* transfer;
    QPushButton* history;


public:
    explicit SummaryWindow(QWidget *parent = nullptr);
    ~SummaryWindow();

signals:


public slots:
    void savingsWithdraw(int);
    void checkingWithdraw(int);
    void savingsDeposit(int);
    void checkingDeposit(int);

};

#endif // SUMMARYWINDOW_H
