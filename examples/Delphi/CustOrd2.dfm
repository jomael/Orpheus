object frmOrders: TfrmOrders
  Left = 219
  Top = 142
  BorderStyle = bsDialog
  Caption = 'Table <-> Database Demo (Orders form)'
  ClientHeight = 297
  ClientWidth = 573
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  DesignSize = (
    573
    297)
  PixelsPerInch = 96
  TextHeight = 16
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 573
    Height = 25
    Align = alTop
    Caption = 'Orders (Read-Only)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object tblOrder: TOvcTable
    Left = 0
    Top = 25
    Width = 573
    Height = 230
    RowLimit = 20
    Align = alTop
    Controller = OvcController1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
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
    GridPenSet.CellWhenUnfocused.Effect = geBoth
    LockedRowsCell = dbOrderHeaderCell
    Options = [otoNoRowResizing, otoNoColResizing, otoTabToArrow, otoEnterToArrow]
    ParentFont = False
    TabOrder = 0
    OnActiveCellChanged = tblOrderActiveCellChanged
    OnBeginEdit = tblOrderBeginEdit
    OnGetCellData = tblOrderGetCellData
    OnLockedCellClick = tblOrderLockedCellClick
    CellData = (
      'frmOrders.dbOrderHeaderCell'
      'frmOrders.RowLable'
      'frmOrders.sfOrderNo'
      'frmOrders.pfSaleDate'
      'frmOrders.pfShipDate'
      'frmOrders.sfEmpNo'
      'frmOrders.sfShipToContact'
      'frmOrders.sfShipToAddr1'
      'frmOrders.sfShipToAddr2'
      'frmOrders.sfShipToCity'
      'frmOrders.sfShipToState'
      'frmOrders.pfShipToZip'
      'frmOrders.sfShipToCountry'
      'frmOrders.pfShipToPhone'
      'frmOrders.sfShipToVia'
      'frmOrders.sfPO'
      'frmOrders.sfTerms'
      'frmOrders.sfPaymentMethod'
      'frmOrders.pfItemsTotal'
      'frmOrders.pfTaxRate2'
      'frmOrders.pfFreight'
      'frmOrders.pfAmountPaid')
    RowData = (
      20)
    ColData = (
      20
      False
      True
      'frmOrders.RowLable'
      55
      False
      True
      'frmOrders.sfOrderNo'
      80
      False
      True
      'frmOrders.pfSaleDate'
      80
      False
      True
      'frmOrders.pfShipDate'
      55
      False
      True
      'frmOrders.sfEmpNo'
      125
      False
      True
      'frmOrders.sfShipToContact'
      150
      False
      True
      'frmOrders.sfShipToAddr1'
      150
      False
      True
      'frmOrders.sfShipToAddr2'
      125
      False
      True
      'frmOrders.sfShipToCity'
      80
      False
      True
      'frmOrders.sfShipToState'
      80
      False
      True
      'frmOrders.pfShipToZip'
      100
      False
      True
      'frmOrders.sfShipToCountry'
      125
      False
      True
      'frmOrders.pfShipToPhone'
      75
      False
      True
      'frmOrders.sfShipToVia'
      80
      False
      True
      'frmOrders.sfPO'
      75
      False
      True
      'frmOrders.sfTerms'
      100
      False
      True
      'frmOrders.sfPaymentMethod'
      85
      False
      True
      'frmOrders.pfItemsTotal'
      85
      False
      True
      'frmOrders.pfTaxRate2'
      85
      False
      True
      'frmOrders.pfFreight'
      85
      False
      True
      'frmOrders.pfAmountPaid')
  end
  object BitBtn1: TBitBtn
    Left = 472
    Top = 264
    Width = 89
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = '&Close'
    DoubleBuffered = True
    NumGlyphs = 2
    ParentDoubleBuffered = False
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object dbOrderQuery: TQuery
    DatabaseName = 'DBDEMOS'
    SQL.Strings = (
      'SELECT * FROM "ORDERS.DB" ORDERS'
      'WHERE ORDERS.CUSTNO = :Number')
    Left = 60
    Top = 80
    ParamData = <
      item
        DataType = ftUnknown
        Name = 'Number'
        ParamType = ptUnknown
      end>
    object dbOrderQueryOrderNo: TFloatField
      FieldName = 'OrderNo'
    end
    object dbOrderQuerySaleDate: TDateTimeField
      FieldName = 'SaleDate'
    end
    object dbOrderQueryShipDate: TDateTimeField
      FieldName = 'ShipDate'
    end
    object dbOrderQueryEmpNo: TIntegerField
      FieldName = 'EmpNo'
    end
    object dbOrderQueryShipToContact: TStringField
      FieldName = 'ShipToContact'
    end
    object dbOrderQueryShipToAddr1: TStringField
      FieldName = 'ShipToAddr1'
      Size = 30
    end
    object dbOrderQueryShipToAddr2: TStringField
      FieldName = 'ShipToAddr2'
      Size = 30
    end
    object dbOrderQueryShipToCity: TStringField
      FieldName = 'ShipToCity'
      Size = 15
    end
    object dbOrderQueryShipToState: TStringField
      FieldName = 'ShipToState'
    end
    object dbOrderQueryShipToZip: TStringField
      FieldName = 'ShipToZip'
      Size = 10
    end
    object dbOrderQueryShipToCountry: TStringField
      FieldName = 'ShipToCountry'
    end
    object dbOrderQueryShipToPhone: TStringField
      FieldName = 'ShipToPhone'
      Size = 15
    end
    object dbOrderQueryShipVIA: TStringField
      FieldName = 'ShipVIA'
      Size = 7
    end
    object dbOrderQueryPO: TStringField
      FieldName = 'PO'
      Size = 15
    end
    object dbOrderQueryTerms: TStringField
      FieldName = 'Terms'
      Size = 6
    end
    object dbOrderQueryPaymentMethod: TStringField
      FieldName = 'PaymentMethod'
      Size = 7
    end
    object dbOrderQueryItemsTotal: TCurrencyField
      FieldName = 'ItemsTotal'
    end
    object dbOrderQueryTaxRate: TFloatField
      FieldName = 'TaxRate'
    end
    object dbOrderQueryFreight: TCurrencyField
      FieldName = 'Freight'
    end
    object dbOrderQueryAmountPaid: TCurrencyField
      FieldName = 'AmountPaid'
    end
  end
  object sfOrderNo: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataType = sftDouble
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 14
    Options = [efoCaretToEnd]
    PictureMask = '#'
    Table = tblOrder
    TableFont = False
    Left = 20
    Top = 140
    RangeHigh = {74B2DBB9838916F2FE43}
    RangeLow = {74B2DBB9838916F2FEC3}
  end
  object pfSaleDate: TOvcTCPictureField
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
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 60
    Top = 140
    RangeHigh = {25600D00000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfShipDate: TOvcTCPictureField
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
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 100
    Top = 140
    RangeHigh = {25600D00000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfEmpNo: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataType = sftLongInt
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 11
    Options = [efoCaretToEnd]
    PictureMask = 'i'
    Table = tblOrder
    TableFont = False
    Left = 140
    Top = 140
    RangeHigh = {FFFFFF7F000000000000}
    RangeLow = {00000080000000000000}
  end
  object sfShipToContact: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 20
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 180
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfShipToAddr1: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 30
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 220
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfShipToAddr2: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 30
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 260
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfShipToCity: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 300
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfShipToState: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 20
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 340
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfShipToZip: TOvcTCPictureField
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
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Options = [efoCaretToEnd, efoTrimBlanks]
    Table = tblOrder
    TableFont = False
    Left = 380
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfShipToCountry: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 20
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 420
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfShipToPhone: TOvcTCPictureField
    PictureMask = 'XXXXXXXXXXXXXXX'
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Options = [efoCaretToEnd, efoTrimBlanks]
    Table = tblOrder
    TableFont = False
    Left = 460
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfShipToVia: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 7
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 20
    Top = 200
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfPO: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 60
    Top = 200
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfTerms: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 6
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 100
    Top = 200
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object sfPaymentMethod: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    DataStringType = tstShortString
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    MaxLength = 7
    Options = [efoCaretToEnd]
    Table = tblOrder
    TableFont = False
    Left = 140
    Top = 200
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object pfItemsTotal: TOvcTCPictureField
    DataType = pftDouble
    PictureMask = '$######.##'
    MaxLength = 10
    Adjust = otaCenterRight
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 180
    Top = 200
    RangeHigh = {74B2DBB9838916F2FE43}
    RangeLow = {74B2DBB9838916F2FEC3}
  end
  object pfTaxRate2: TOvcTCPictureField
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
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 220
    Top = 200
    RangeHigh = {74B2DBB9838916F2FE43}
    RangeLow = {74B2DBB9838916F2FEC3}
  end
  object pfFreight: TOvcTCPictureField
    DataType = pftDouble
    PictureMask = '$######.##'
    MaxLength = 10
    Adjust = otaCenterRight
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 260
    Top = 200
    RangeHigh = {74B2DBB9838916F2FE43}
    RangeLow = {74B2DBB9838916F2FEC3}
  end
  object pfAmountPaid: TOvcTCPictureField
    DataType = pftDouble
    PictureMask = '$######.##'
    MaxLength = 10
    Adjust = otaCenterRight
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Epoch = 1900
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 300
    Top = 200
    RangeHigh = {74B2DBB9838916F2FE43}
    RangeLow = {74B2DBB9838916F2FEC3}
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
    Left = 20
    Top = 80
  end
  object RowLable: TOvcTCRowHead
    ShowActiveRow = True
    ShowNumbers = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 100
    Top = 80
  end
  object dbOrderHeaderCell: TOvcTCColHead
    ShowActiveCol = True
    ShowLetters = False
    Adjust = otaCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    Margin = 2
    Table = tblOrder
    TableFont = False
    Left = 140
    Top = 80
  end
end
