use Spreadsheet::WriteExcel;

    my $workbook = Spreadsheet::WriteExcel->new('perlfile.xls');

    $worksheet1 = $workbook->add_worksheet(perlfile1);
   
    $col = $row = 0;
    $worksheet1->write($row, $col, 'Hi Excel!');
    $worksheet1->write(1, $col, 'second row');
    $worksheet1->write('A3',1);
    $worksheet1->write('A5',4);
    $worksheet1->write('A6',5);
    $worksheet1->write('B3',2);
    $worksheet1->write('B5',6);
    $worksheet1->write('B6',7);
    $worksheet1->write('C3',3);
    $worksheet1->write('E1',10);
    $worksheet1->write('E2',11);
    $worksheet1->write('E3',12);

    $date=localtime();
    print "date = $date";