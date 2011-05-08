object frmCustomers: TfrmCustomers
  Left = 0
  Top = 0
  Caption = 'Table <-> Database Demo (Customers form)'
  ClientHeight = 343
  ClientWidth = 645
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBlack
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poDesigned
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 645
    Height = 25
    Align = alTop
    Caption = 'Customers'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    ExplicitWidth = 616
  end
  object tblCustomer: TOvcTable
    Left = 0
    Top = 25
    Width = 645
    Height = 280
    RowLimit = 20
    Align = alTop
    Controller = OvcController1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    GridPenSet.NormalGrid.NormalColor = clBtnShadow
    GridPenSet.NormalGrid.Style = psSolid
    GridPenSet.NormalGrid.Effect = ge3D
    GridPenSet.LockedGrid.NormalColor = clBtnShadow
    GridPenSet.LockedGrid.Style = psSolid
    GridPenSet.LockedGrid.Effect = ge3D
    GridPenSet.CellWhenFocused.NormalColor = clBlack
    GridPenSet.CellWhenFocused.Style = psSolid
    GridPenSet.CellWhenFocused.Effect = geBoth
    GridPenSet.CellWhenUnfocused.NormalColor = clBlack
    GridPenSet.CellWhenUnfocused.Style = psDash
    GridPenSet.CellWhenUnfocused.Effect = geNone
    LockedRowsCell = dbCustomerHeaderCell
    Options = [otoNoRowResizing, otoNoColResizing, otoTabToArrow, otoEnterToArrow]
    ParentFont = False
    TabOrder = 0
    OnActiveCellChanged = tblCustomerActiveCellChanged
    OnBeginEdit = tblCustomerBeginEdit
    OnDoneEdit = tblCustomerDoneEdit
    OnGetCellData = tblCustomerGetCellData
    OnLockedCellClick = tblCustomerLockedCellClick
    OnTopLeftCellChanging = tblCustomerTopLeftCellChanging
    ExplicitWidth = 616
    CellData = (
      'frmCustomers.dbCustomerHeaderCell'
      'frmCustomers.pfLastInvoiceDate'
      'frmCustomers.sfContact'
      'frmCustomers.pfTaxRate1'
      'frmCustomers.pfFax'
      'frmCustomers.pfPhone'
      'frmCustomers.sfCountry'
      'frmCustomers.pfZip'
      'frmCustomers.sfState'
      'frmCustomers.sfCity'
      'frmCustomers.sfAddr2'
      'frmCustomers.sfAddr1'
      'frmCustomers.sfCompany'
      'frmCustomers.sfCustNo1'
      'frmCustomers.RowLabel')
    RowData = (
      20)
    ColData = (
      20
      False
      True
      'frmCustomers.RowLabel'
      55
      False
      True
      'frmCustomers.sfCustNo1'
      160
      False
      True
      'frmCustomers.sfCompany'
      150
      False
      True
      'frmCustomers.sfAddr1'
      80
      False
      True
      'frmCustomers.sfAddr2'
      90
      False
      True
      'frmCustomers.sfCity'
      60
      False
      True
      'frmCustomers.sfState'
      70
      False
      True
      'frmCustomers.pfZip'
      105
      False
      True
      'frmCustomers.sfCountry'
      95
      False
      True
      'frmCustomers.pfPhone'
      95
      False
      True
      'frmCustomers.pfFax'
      70
      False
      True
      'frmCustomers.pfTaxRate1'
      110
      False
      True
      'frmCustomers.sfContact'
      100
      False
      True
      'frmCustomers.pfLastInvoiceDate')
  end
  object btnOrders: TBitBtn
    Left = 224
    Top = 312
    Width = 169
    Height = 25
    Caption = 'Display &Orders'
    Default = True
    DoubleBuffered = True
    ParentDoubleBuffered = False
    TabOrder = 2
    OnClick = btnOrdersClick
  end
  object btnClose: TBitBtn
    Left = 504
    Top = 312
    Width = 89
    Height = 25
    Caption = '&Close'
    DoubleBuffered = True
    NumGlyphs = 2
    ParentDoubleBuffered = False
    TabOrder = 3
    OnClick = btnCloseClick
  end
  object btnAbout: TBitBtn
    Left = 24
    Top = 312
    Width = 89
    Height = 25
    Caption = '&About'
    DoubleBuffered = True
    ParentDoubleBuffered = False
    TabOrder = 4
    OnClick = btnAboutClick
  end
  object dbCustomer: TTable
    DatabaseName = 'DBDEMOS'
    TableName = 'CUSTOMER.DB'
    Left = 78
    Top = 161
    object dbCustomerCustNo: TFloatField
      FieldName = 'CustNo'
    end
    object dbCustomerCompany: TStringField
      FieldName = 'Company'
      Size = 30
    end
    object dbCustomerAddr1: TStringField
      FieldName = 'Addr1'
      Size = 30
    end
    object dbCustomerAddr2: TStringField
      FieldName = 'Addr2'
      Size = 30
    end
    object dbCustomerCity: TStringField
      FieldName = 'City'
      Size = 15
    end
    object dbCustomerState: TStringField
      FieldName = 'State'
    end
    object dbCustomerZip: TStringField
      FieldName = 'Zip'
      Size = 10
    end
    object dbCustomerCountry: TStringField
      FieldName = 'Country'
    end
    object dbCustomerPhone: TStringField
      FieldName = 'Phone'
      Size = 15
    end
    object dbCustomerFAX: TStringField
      FieldName = 'FAX'
      Size = 15
    end
    object dbCustomerTaxRate: TFloatField
      FieldName = 'TaxRate'
    end
    object dbCustomerContact: TStringField
      FieldName = 'Contact'
    end
    object dbCustomerLastInvoiceDate: TDateTimeField
      FieldName = 'LastInvoiceDate'
    end
  end
  object OvcController1: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      ()
      'WordStar'
      False
      ()
      'Grid'
      False
      ())
    Epoch = 1900
    Left = 78
    Top = 108
  end
  object sfCustNo1: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    Color = clRed
    DataType = sftDouble
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 10
    Options = [efoCaretToEnd]
    PictureMask = '#'
    Table = tblCustomer
    TableColor = False
    TableFont = False
    Left = 80
    Top = 220
    RangeHigh = {74B2DBB9838916F2FE43}
    RangeLow = {74B2DBB9838916F2FEC3}
  end
  object sfCompany: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 30
    Options = [efoCaretToEnd]
    Table = tblCustomer
    TableFont = False
    Left = 120
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfAddr1: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 30
    Options = [efoCaretToEnd]
    Table = tblCustomer
    TableFont = False
    Left = 160
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfAddr2: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 30
    Options = [efoCaretToEnd]
    Table = tblCustomer
    TableFont = False
    Left = 200
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfCity: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Options = [efoCaretToEnd]
    Table = tblCustomer
    TableFont = False
    Left = 240
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfState: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 20
    Options = [efoCaretToEnd]
    Table = tblCustomer
    TableFont = False
    Left = 280
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfZip: TOvcTCPictureField
    PictureMask = 'XXXXXXXXXX'
    MaxLength = 10
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Options = [efoCaretToEnd, efoStripLiterals]
    Table = tblCustomer
    TableFont = False
    Left = 320
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfCountry: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 20
    Options = [efoCaretToEnd]
    Table = tblCustomer
    TableFont = False
    Left = 360
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfPhone: TOvcTCPictureField
    PictureMask = 'XXXXXXXXXXXXXXX'
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblCustomer
    TableFont = False
    Left = 400
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfFax: TOvcTCPictureField
    PictureMask = 'XXXXXXXXXXXXXXX'
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblCustomer
    TableFont = False
    Left = 440
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfTaxRate1: TOvcTCPictureField
    DataType = pftDouble
    PictureMask = '#######.##'
    MaxLength = 10
    Adjust = otaCenterRight
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblCustomer
    TableFont = False
    Left = 480
    Top = 220
    RangeHigh = {74B2DBB9838916F2FE43}
    RangeLow = {74B2DBB9838916F2FEC3}
  end
  object sfContact: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 20
    Options = [efoCaretToEnd]
    Table = tblCustomer
    TableFont = False
    Left = 520
    Top = 220
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfLastInvoiceDate: TOvcTCPictureField
    DataType = pftDate
    PictureMask = 'mm/dd/yyyy'
    MaxLength = 10
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblCustomer
    TableFont = False
    Left = 560
    Top = 220
    RangeHigh = {25600D00000000000000}
    RangeLow = {00000000000000000000}
  end
  object RowLabel: TOvcTCRowHead
    ShowActiveRow = True
    ShowNumbers = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblCustomer
    TableFont = False
    Left = 138
    Top = 160
  end
  object dbCustomerHeaderCell: TOvcTCColHead
    ShowActiveCol = True
    ShowLetters = False
    Adjust = otaCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblCustomer
    TableFont = False
    Left = 224
    Top = 160
  end
end
