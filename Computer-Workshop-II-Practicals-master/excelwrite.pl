# For CSV this module uses Text::CSV_XS or Text::CSV_PP.
use Spreadsheet::WriteExcel;

    # Create a new Excel workbook
    my $workbook = Spreadsheet::WriteExcel->new('perl.xls');

    # Add a worksheet
    $worksheet1 = $workbook->add_worksheet(cse);
    $worksheet2 = $workbook->add_worksheet(IT);
   
   
    #  Add and define a format
    $format = $workbook->add_format(); # Add a format
    $format->set_bold();
    $format->set_color('red');
    $format->set_align('center');

    # Write a formatted and unformatted string, row and column notation.
    $col = $row = 0;
    $worksheet1->write($row, $col, 'Hi Excel!', $format);
    $worksheet2->write(1,    $col, 'Hi Excel!');

    # Write a number and a formula using A1 notation
    $worksheet1->write('A3', 1.2345);
    $worksheet2->write('A4', '=SIN(PI()/4)');