object Form1: TForm1
  Left = 193
  Top = 107
  Caption = 'Form1'
  ClientHeight = 178
  ClientWidth = 263
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Default'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object OvcTable1: TOvcTable
    Left = 13
    Top = 12
    Width = 148
    Height = 153
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
    Options = [otoNoRowResizing, otoNoColResizing, otoAlwaysEditing, otoNoSelection]
    ScrollBars = ssVertical
    TabOrder = 0
    OnGetCellData = OvcTable1GetCellData
    CellData = (
      'Form1.OvcTCGlyph1')
    RowData = (
      25
      1
      False
      32)
    ColData = (
      54
      False
      False
      73
      False
      True
      'Form1.OvcTCGlyph1')
  end
  object Button1: TButton
    Left = 177
    Top = 85
    Width = 81
    Height = 25
    Caption = 'New Settings'
    TabOrder = 1
    OnClick = Button1Click
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
    Left = 179
    Top = 126
  end
  object OvcTCGlyph1: TOvcTCGlyph
    Access = otxNormal
    Adjust = otaCenter
    CellGlyphs.IsDefault = False
    CellGlyphs.BitMap.Data = {
      06020000424D0602000000000000760000002800000028000000140000000100
      0400000000009001000000000000000000001000000010000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00777777777777
      77777777777777777777777777777777777BBBB7777777777777777777777777
      777777777BBBBBBBBB777777777777777777777777777777BBBBBBBBBBB77777
      77777777777777777777777BBBBBBBB000BB77777777111111111111117777BB
      BBBBBB00000BB7777777911F11F1FF1119777BB00000B000B00BB77777777111
      1111111117777BB00000000BBBBBB7777777791F11F1FF1197777BBBBBB000BB
      BBBBBB777777771F11F1FF1177777BBBBBBBBBBBBBBBBB777777779111111119
      77777BBBBBBBBBBBBBBBBB7777777791F1F1FF1977777BBBBBBBBBBBBBBBBB77
      777799711111111799777BBBBBBBBBBBBBBBBB77777799799999999799777BBB
      BBBBBBBBBBBBB7777777999999999999997777BBB0BBBBBBBBBBB77777779999
      99999999997777BB00BBBB00BBBB777777777777777777777777777BBBBBBBB0
      BBB77777777777777777777777777777BBBBBBBBBB7777777777777777777777
      7777777777BBBBBBB77777777777777777777777777777777777777777777777
      77777777777777777777}
    CellGlyphs.GlyphCount = 2
    CellGlyphs.ActiveGlyphCount = 2
    Table = OvcTable1
    OnClick = OvcTCGlyph1Click
    Left = 217
    Top = 126
  end
end
