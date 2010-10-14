object Form1: TForm1
  Left = 194
  Top = 108
  Caption = 'Form1'
  ClientHeight = 269
  ClientWidth = 532
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Default'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object OvcTable1: TOvcTable
    Left = 12
    Top = 11
    Width = 516
    Height = 180
    Controller = OvcController1
    GridPenSet.NormalGrid.NormalColor = clBtnShadow
    GridPenSet.NormalGrid.Style = psDot
    GridPenSet.NormalGrid.Effect = geBoth
    GridPenSet.LockedGrid.NormalColor = clBtnShadow
    GridPenSet.LockedGrid.Style = psSolid
    GridPenSet.LockedGrid.Effect = ge3D
    GridPenSet.CellWhenFocused.NormalColor = clBlack
    GridPenSet.CellWhenFocused.Style = psSolid
    GridPenSet.CellWhenFocused.Effect = geBoth
    GridPenSet.CellWhenUnfocused.NormalColor = clBlack
    GridPenSet.CellWhenUnfocused.Style = psDash
    GridPenSet.CellWhenUnfocused.Effect = geBoth
    ScrollBars = ssVertical
    TabOrder = 0
    OnGetCellData = OvcTable1GetCellData
    CellData = (
      'Form1.OvcTCSimpleField1'
      'Form1.OvcTCSimpleField2'
      'Form1.OvcTCSimpleField3'
      'Form1.OvcTCSimpleField4'
      'Form1.OvcTCSimpleField5')
    RowData = (
      25)
    ColData = (
      35
      False
      False
      77
      False
      True
      'Form1.OvcTCSimpleField1'
      113
      False
      True
      'Form1.OvcTCSimpleField2'
      119
      False
      True
      'Form1.OvcTCSimpleField3'
      71
      False
      True
      'Form1.OvcTCSimpleField4'
      82
      False
      True
      'Form1.OvcTCSimpleField5')
  end
  object Memo1: TMemo
    Left = 87
    Top = 202
    Width = 366
    Height = 71
    Lines.Strings = (
      'This example shows how to populate the TOvcTable'
      'with the results of a TQuery. It uses the COUNTRY.DB'
      'sample file and presumes that the BCDEMOS alias'
      'exists (default with C++Builder setup).')
    ReadOnly = True
    TabOrder = 1
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
    Left = 193
    Top = 140
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'DBDEMOS'
    SQL.Strings = (
      'SELECT * from COUNTRY')
    Left = 81
    Top = 140
  end
  object OvcTCSimpleField1: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Options = [efoCaretToEnd]
    Table = OvcTable1
    Left = 118
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object OvcTCSimpleField2: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Options = [efoCaretToEnd]
    Table = OvcTable1
    Left = 155
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object OvcTCSimpleField3: TOvcTCSimpleField
    CaretOvr.Shape = csBlock
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    Options = [efoCaretToEnd]
    Table = OvcTable1
    Left = 230
    Top = 140
    RangeHigh = {00000000000000000000}
    RangeLow = {00000000000000000000}
  end
  object OvcTCSimpleField4: TOvcTCSimpleField
    Adjust = otaCenterRight
    CaretOvr.Shape = csBlock
    DataType = sftLongInt
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    MaxLength = 8
    Options = [efoCaretToEnd]
    PictureMask = 'i'
    Table = OvcTable1
    Left = 267
    Top = 140
    RangeHigh = {FFFFFF7F000000000000}
    RangeLow = {00000080000000000000}
  end
  object OvcTCSimpleField5: TOvcTCSimpleField
    Adjust = otaCenterRight
    CaretOvr.Shape = csBlock
    DataType = sftLongInt
    EFColors.Disabled.BackColor = clWindow
    EFColors.Disabled.TextColor = clGrayText
    EFColors.Error.BackColor = clRed
    EFColors.Error.TextColor = clBlack
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    MaxLength = 8
    Options = [efoCaretToEnd]
    PictureMask = 'i'
    Table = OvcTable1
    Left = 304
    Top = 140
    RangeHigh = {FFFFFF7F000000000000}
    RangeLow = {00000080000000000000}
  end
end
